using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using LuaInterface;
using System.Reflection;
using System;
namespace DwcExtension
{
    public class EventTriggerListener : EventTrigger
    {

        public  LuaFunction onClick = null;
        public  LuaFunction onDown = null;
        public  LuaFunction onEnter = null;
        public  LuaFunction onExit = null;
        public  LuaFunction onUp = null;
        public  LuaFunction onSelect = null;
        public  LuaFunction onUpdateSelect = null;

        public  LuaFunction onBeginDrag = null;
        public  LuaFunction onCancel = null;
        public  LuaFunction onDeselect = null;
        public  LuaFunction onDrag = null;
        public  LuaFunction onDrop = null;
        public  LuaFunction onEndDrag = null;
        public  LuaFunction onMove = null;

        public LuaFunction onInitializePotentialDrag = null;
        public LuaFunction onScroll = null;
        public LuaFunction onSubmit = null;

        public override void OnPointerClick(PointerEventData eventData)
        {
            if (onClick != null) onClick.Call(gameObject, eventData);
        }
        public override void OnPointerDown(PointerEventData eventData)
        {
            if (onDown != null) onDown.Call(gameObject, eventData);
        }
        public override void OnPointerEnter(PointerEventData eventData)
        {
            if (onEnter != null) onEnter.Call(gameObject,eventData);
        }
        public override void OnPointerExit(PointerEventData eventData)
        {
            if (onExit != null) onExit.Call(gameObject,eventData);
        }
        public override void OnPointerUp(PointerEventData eventData)
        {
            if (onUp != null) onUp.Call(gameObject,eventData);
        }
        public override void OnSelect(BaseEventData eventData)
        {
           if (onSelect != null) onSelect.Call(gameObject,eventData);
        }
        public override void OnUpdateSelected(BaseEventData eventData)
        {
            if (onUpdateSelect != null) onUpdateSelect.Call(gameObject,eventData);
        }
        public override void OnBeginDrag(PointerEventData eventData)
        {
            if (onBeginDrag != null) { onBeginDrag.Call(gameObject, eventData); }
        }
        public override void OnCancel(BaseEventData eventData)
        {
            if (onCancel != null) { onCancel.Call(gameObject, eventData); }
        }
        public override void OnDeselect(BaseEventData eventData)
        {
            if (onDeselect != null) { onDeselect.Call(gameObject, eventData); }
        }
        public override void OnDrag(PointerEventData eventData)
        {
            if (onDrag != null) 
            {
                onDrag.Call(gameObject, eventData);
            }
        }
        public override void OnDrop(PointerEventData eventData)
        {
            if (onDrop != null) { onDrop.Call(gameObject, eventData); }
        }
        public override void OnEndDrag(PointerEventData eventData)
        {
            if (onEndDrag != null) { onEndDrag.Call(gameObject, eventData); }
        }
        public override void OnMove(AxisEventData eventData)
        {
            if (onMove != null) { onMove.Call(gameObject, eventData); }
        }

        public override void OnInitializePotentialDrag(PointerEventData eventData)
        {
            if (onInitializePotentialDrag != null) { onInitializePotentialDrag.Call(gameObject, eventData); }
        }
        public override void OnScroll(PointerEventData eventData)
        {
            if (onScroll != null) onScroll.Call(gameObject,eventData);
        }
        public override void OnSubmit(BaseEventData eventData)
        {
            if (onSubmit != null) onSubmit.Call(gameObject,eventData);
        }
        public void OnDestroy()
        {
        
        }
    }
}
