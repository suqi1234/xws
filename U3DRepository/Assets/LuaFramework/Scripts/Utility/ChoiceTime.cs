using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;


public enum Place
{
    _day = 3, _second = 6
}

public class ChoiceTime : MonoBehaviour, IDeselectHandler
{
    private Text ShowLabel;
    private Image ArrowsImage;
    private GameObject ChoiceTimeObj;
    private Toggle ChoiceBtn;
    private Text DataText;

    private bool isShowChoiceTime=false;

    /// <summary>
    /// 最小日期和最大日期
    /// </summary>
    public DateTime _minDate, _maxDate;
    /// <summary>
    /// 选择的日期（年月日时分秒）
    /// </summary>
    public DateTime _selectDate;
    /// <summary>
    /// 精确位置
    /// </summary>
    public Place _setPlace=Place._day;
    /// <summary>
    /// 拖动距离系数（拖动距离/_dragRatio）
    /// </summary>
    public int _dragRatio=2;
    /// <summary>
    /// 时间选择器列表
    /// </summary>
    private List<DatePicker> _datePickerList;
    /// <summary>
    /// 当选择日期的委托事件
    /// </summary>
    public event OnDateUpdate _OnDateUpdate;

    public DateTime _selectTime;


    //private static ChoiceTime _instance;
    //public static ChoiceTime Instance
    //{
    //    get
    //    {
    //        return _instance;
    //    }
    //}

    void Awake()
    {
        //_instance = this;
        //设置最大最小日期
        _minDate = new DateTime(1999, 1, 1, 0, 0, 0);
        _maxDate = new DateTime(2099, 1, 1, 0, 0, 0);
        
    }

    void Start()
    {
        ChoiceTimeObj = this.transform.Find("Time").gameObject;
        ArrowsImage = this.transform.Find("ShowArrows").GetComponent<Image>();
        ShowLabel = this.transform.Find("Label").GetComponent<Text>();
        DataText = this.transform.Find("Text").GetComponent<Text>();
        ChoiceBtn = this.GetComponent<Toggle>();
        ChoiceBtn.onValueChanged.AddListener(StartChoiceTime);

        Init();

        //开始默认选择系统时间
        SetShowTime(DateTime.Now);
        ChoiceTimeObj.SetActive(false);

    }

    public void Init()
    {
        _datePickerList = new List<DatePicker>();
        _selectDate = DateTime.Now;
        _selectTime = _selectDate;
        for (int i = 0; i < 6; i++)
        {
            _datePickerList.Add(ChoiceTimeObj.transform.GetChild(i).GetComponent<DatePicker>());
            _datePickerList[i].Init();
            _datePickerList[i]._onDateUpdate += onDateUpdate;
            if (i < Convert.ToInt32(_setPlace))
            {
                _datePickerList[i].gameObject.SetActive(true);
            }
            else
            {
                _datePickerList[i].gameObject.SetActive(false);
            }
        }
    }

    public void StartChoiceTime(bool isOn)
    {
        Debug.Log(isOn);
        if (isOn)
        {
            ChoiceTimeObj.SetActive(true);
            ArrowsImage.transform.localRotation = Quaternion.Euler(180,0,0);
        }
        else
        {
            ChoiceTimeObj.SetActive(false);
            ArrowsImage.transform.localRotation = Quaternion.Euler(0, 0, 0);
            //判断选没选择日期，当只点开选择框没有选择时，默认的日期会变为001年。所以要判断下
            if (_selectTime.ToString("yyyy-MM-dd HH:mm:ss").Substring(0, 3) == "000")
            {
                SetShowTime(DateTime.Now);
            }
            else      
            {
                SetShowTime(_selectTime);
            }
        }
    }

    private void SetShowTime(DateTime time)
    {
        long stamp = 0;
        if (_setPlace == Place._day || _setPlace == 0)
        {
            
            ShowLabel.text = time.Day + "/" + time.Month + "/" + time.Year;
            Debug.Log("--------"+ ShowLabel.text);
            DateTime t = new DateTime(time.Year, time.Month, time.Day,0,0,0);
            stamp = GetTimeStamp(t);
            
        }
        else if (_setPlace == Place._second)
        {
            ShowLabel.text = time.Day + "/" + time.Month + "/" + time.Year
            + time.ToString(" HH:mm:ss");
            stamp = GetTimeStamp(time);
        }
        DataText.text = stamp.ToString();

    }

    /// <summary>
    /// 当选择的日期更新
    /// </summary>
    public void onDateUpdate()
    {
        //Debug.Log("当前选择日期：" + _selectDate.ToString("yyyy年MM月dd日 HH : mm : ss"));
        _selectTime = _selectDate;
        for (int i = 0; i < _datePickerList.Count; i++)
        {
            _datePickerList[i].RefreshDateList();
        }
        SetShowTime(_selectTime);
    }

    public string GetMothStr(int month)
    {

        switch (month)
        {
            case 1:
                return "Januari";
            case 2:
                return "Februari";
            case 3:
                return "Maret";
            case 4:
                return "April";
            case 5:
                return "Mei";
            case 6:
                return "Juni";
            case 7:
                return "Juli";
            case 8:
                return "Agustus";
            case 9:
                return "September";
            case 10:
                return "Oktober";
            case 11:
                return "November";
            case 12:
                return "Desember";
            default:
                return "Januari";
        }
    }

    public long GetTimeStamp(DateTime time)
    {
        DateTime startTime = TimeZone.CurrentTimeZone.ToLocalTime(new DateTime(1970, 1, 1, 0, 0, 0, 0));
        return (long)(time - startTime).TotalSeconds;
    }

    public void OnDeselect(BaseEventData eventData)
    {
        if (!ChoiceBtn.isOn) return;
        ChoiceBtn.isOn = false;
    }
}