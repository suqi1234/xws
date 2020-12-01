require "Mode/Player"

--时间戳转换为时间
function getTimeStamp(t)
    return os.date("%c",t)
end
--- 格式化手机号码
function SetFormatPhoneNumber(num)
    local temstr = tostring(num);
    if string.len(temstr) == 11 then
        local temp1 = string.sub(temstr,1,3);
        local temp2 = string.sub(temstr,8,11);
        temstr=temp1.."****"..temp2;
    end
    return temstr;
end

--- 规整化数字00：00：00
-- 输入：int time (s)
-- 输出str:00:00:00 
function SetFormatTime(timenum)
    local houre = ""
    local min = ""
    local sec = ""
    houre = tostring(math.floor(timenum / 3600));
    if string.len(houre) < 2 then
        houre = "0" .. houre;
    end
    min = tostring(math.floor(timenum % 3600 / 60))
    if string.len(min) < 2 then
        min = "0" .. min;
    end
    sec = tostring(math.floor(timenum % 60))
    if string.len(sec) < 2 then
        sec = "0" .. sec;
    end
    return houre .. ":" .. min .. ":" .. sec
end

-- 字符串数字缩短
function FormatKNum(num)
    -- 只保留4位数的写法
    if tonumber(num) >= 1000 then
        local k = math.floor(num/10);
        k = k/100;
        num = k.."K";
    end
    return num;
end

-- 数字缩短
function FormatEnglishNum(num)

    if tonumber(num) >= 1000000000000 then
        local t = math.floor(num/10000000000);
        t = t/100;
        num = t.."T";
    elseif tonumber(num) >= 1000000000 then
        local b = math.floor(num/10000000);
        b = b/100;
        num = b.."B";
    elseif tonumber(num) >= 1000000 then
        local m = math.floor(num/10000);
        m = m/100;
        num = m.."M";
    elseif tonumber(num) >= 1000 then
        local k = math.floor(num/10);
        k = k/100;
        num = k.."K";
    end
    return num;
end


function FormatChineseNumbers(num)
    local str = tostring(num)
    if #str >= 10 then
        local yi = num/100000000;
        if num%100000000 == 0 then
            return yi..GeLanguageById(273) --"亿";
        else
            local k = math.floor(yi*1000);
            return (k/1000)..GeLanguageById(273) --"亿"
        end
    end
    if #str >= 8 then
        str = tostring((num+0.1)/10000)
        local str1 = string.sub(str,1,#str-9)
        local str2 = string.sub(str,#str-8,#str-3) --保留两位小数
        if #str1>3 then
            str1 = string.sub(str1,1,#str1-3)..","..string.sub(str1,#str1-2)
        end
        return str1..","..str2..GeLanguageById(272) --"万"
    end
    if #str >= 5 then
        return num/10000 ..GeLanguageById(272) --"万"
    end
    return num
end

function FormatNumbersSplit(num)
    if type(num)~="number" then return end
    local Number = num
    local DecimalsPart = "" --小数部分
    if Number >= 10000 then
        local WStr = string.gsub(tostring(Number / 10000), "%.", "*")
        local WSplit = Split(WStr, "*")
        Number = tonumber(WSplit[1])
        if #WSplit == 2 then
            if #WSplit[2] >= 2 then
                DecimalsPart = string.sub(WSplit[2], 1, 2)
            elseif #WSplit[2] == 1 then
                DecimalsPart = WSplit[2].."0"
            else
                DecimalsPart = WSplit[2].."00"
            end
        else
                DecimalsPart ="00"
        end
    end
    local retStr = ""
    local Count=math.floor(#tostring(Number) / 3);
    for i = 1, Count do
        local Temp = Number / 1000
        local numStr = string.gsub(tostring(Temp), "%.", "*")
        local DecimalSplit = Split(numStr, "*")
        Number = tonumber(DecimalSplit[1])
        if #DecimalSplit==2 then
            if #DecimalSplit[2]==2 then
                DecimalSplit[2]=DecimalSplit[2].."0";
            elseif #DecimalSplit[2]==1 then
                    DecimalSplit[2]=DecimalSplit[2].."00";
            end
            if retStr ~= "" then
            retStr = tostring(DecimalSplit[2]) .. "," .. retStr
            else
            retStr = tostring(DecimalSplit[2])
            end
        else
            if retStr ~= "" then
                retStr = "000".. "," .. retStr
            else
                retStr = "000"
            end
        end
    end
    if DecimalsPart ~= "" then
          retStr = retStr .. "." .. DecimalsPart .. "w"
    end
    if Number>0  then
        if Count>0  then
          retStr =Number..','..retStr;
          else
            retStr =Number..retStr;
          end
    end
    return retStr
end

function DecodedString(NumStr)
    local NewStr=string.gsub(NumStr, "%,", "");
    local w=string.match(NewStr, "w");
    if w =="w" then
        NewStr=string.gsub(NewStr, "w", "");
      return tonumber(NewStr)*10000;
    else
      return tostring(NewStr);
    end
end

function FormatGlod(num)
    local StrNum = string.gsub(tostring(num), "%.", "*")
    local SplitNum = Split(tostring(StrNum), "*")
    local Number = (#SplitNum==2 and {tonumber(SplitNum[1])} or {tonumber(num)})[1]
    local DecimalsPart = (#SplitNum==2 and {SplitNum[2]} or {""})[1] --小数部分
    local retStr = ""
    local Count=math.floor(#tostring(Number) / 3);
    for i = 1, Count do
        local Temp = Number / 1000
        local numStr = string.gsub(tostring(Temp), "%.", "*")
        local DecimalSplit = Split(numStr, "*")
        Number = tonumber(DecimalSplit[1])
        if #DecimalSplit==2 then
            if #DecimalSplit[2]==2 then
                DecimalSplit[2]=DecimalSplit[2].."0";
            elseif #DecimalSplit[2]==1 then
                    DecimalSplit[2]=DecimalSplit[2].."00";
            end
            if retStr ~= "" then
            retStr = tostring(DecimalSplit[2]) .. "," .. retStr
            else
            retStr = tostring(DecimalSplit[2])
            end
        else
            if retStr ~= "" then
                retStr = "000".. "," .. retStr
            else
                retStr = "000"
            end
        end
    end
    if DecimalsPart ~= "" then
          retStr = retStr .. "." .. DecimalsPart
    end
    if Number>0  then
        if Count>0  then
          retStr =Number..','..retStr;
          else
            retStr =Number..retStr;
          end
    end
    return (retStr=="" and {"0"} or {retStr})[1]
end

function FormatPourNumbers(num)
    if tonumber(num) >= 100000000 then
        local yi = num/100000000;
        if num%100000000 == 0 then
            num = yi..GeLanguageById(273) --"亿";
        else
            local k = math.floor(yi*10);
            num = (k/10)..GeLanguageById(273) --"亿";
        end
    elseif tonumber(num) >= 10000 then
        local wan = num/10000;
        if num%10000 == 0 then
            num = wan..GeLanguageById(272) --"万";
        else
            local k = math.floor(wan*10);
            num = (k/10)..GeLanguageById(272) --"万";
        end
    end
    return num;
end

---如果金币上限大于1亿将金币转换为(33.33亿)的显示形式
function GoldShowFormat(num, isAcronym)
    if num >= 10^5 and num < 10^8 then
        num = math.floor(num / 10^2)
        return string.format(isAcronym and "%.2fw" or "%.2f万", num / 10^2)
    elseif num >= 10^8 then
        num = math.floor(num / 10 ^ 5)
        return string.format(isAcronym and "%.3fy" or "%.3f亿", num / 10^3)
    else
        return tostring(num)
    end
end

function FormatSmallNumber(num)
    if tonumber(num) >= 100000000 or tonumber(num) <= -100000000 then
        local yi = num/100000000;
        if num%100000000 == 0 then
            num = yi.."y";
        else
            local k = math.floor(yi*100);
            num = (k/100).."y";
        end
    elseif tonumber(num) >= 10000 or tonumber(num) <= -10000 then
        local wan = num/10000;
        if num%10000 == 0 then
            num = wan.."w";
        else
            local k = math.floor(wan*10);
            num = (k/10).."w";
        end
    end
    return num;
end

function ChipNumber( num )
    if tonumber(num) >= 10000 or tonumber(num) <= -10000 then
        local wan = num/10000;
        if num%10000 == 0 then
            num = wan.."w";
        else
            local k = math.floor(wan*10);
            num = (k/10).."w";
        end
    end
return num;
end
function FormatIntNumber( num )
    if tonumber(num) >= 10000 or tonumber(num) <= -10000 then
        local wan = num/10000;
        if num%10000 == 0 then
            num = wan.."w";
        else
            local k = math.floor(wan);
            num = k.."w";
        end
    end
return num;
end
function FormatChipNumber(num)
    if tonumber(num) >= 100000000 or tonumber(num) <= -100000000 then
        local yi = num/100000000;
        if num%100000000 == 0 then
            num = yi.."y";
        else
            local k = math.floor(yi);
            num = k.."y";
        end
    elseif tonumber(num) >= 10000 or tonumber(num) <= -10000 then
        local wan = num/10000;
        if num%10000 == 0 then
            num = wan.."w";
        else
            local k = math.floor(wan);
            num = k.."w";
        end
    end
    return num;
end


function GetNums(num)
    if num >= 100000000 then
        if  (num / 100000000) == math.floor(num / 100000000)  then
            return  math.floor(num / 100000000).."y"
        else
            return  ConversionF(num , 2)
        end       
    end  
    return num
end

function GetNumss(num)
    if num >= 100000000 then
        if  (num / 100000000) == math.floor(num / 100000000)  then
            return  math.floor(num / 100000000).."y"
        else
            return  ConversionF(num , 2)
        end 
    elseif num >= 10000 then  
        if  (num / 10000) == math.floor(num / 10000)  then
            return  math.floor(num / 10000).."w"
        else
            return  ConversionF(num , 2)
        end 
    end  
    return num
end

function GetNum(num, len)
    local z, x = math.modf(num)
    if x == 0 then
        x = '0.0000000000'
    else
        x = tostring(x)
        if string.len(x) < 4 then
            x = x .. '0000000000'
        end
    end
  
    len = tonumber(len) + 2
    if len > string.len(x) then
        len = string.len(x)
    end
    return z .. '.'..string.sub(x, 3, len)
end
function ConversionF(coin,len)
    len = len or "2"
    local temp = "%."..len.."f"
    if coin >= 10000 then
       if coin >= 100000000 then
            coin = coin / 100000000
            return GetNum(coin, len) .. 'y'
       else
            coin = (coin / 10000)
            return GetNum(coin, len).."w"
       end
    end  
    return coin 
end

function FormatSegmentationNumbers(num)
    local numstr = tostring(num);
    local k;
    while true do
        numstr, k = string.gsub(numstr, "^(-?%d+)(%d%d%d)", '%1,%2');
        --log(numstr,k);
        if k == 0 then
            break end
        end
    return numstr;
end


--输出日志--
function log(str)
    if Player.PlayerType == 2 then
        Util.Log(str);
    end
end

--错误日志--
function LogError(str)
    if Player.PlayerType == 2 then
    	Util.LogError(str);
    end
end

--错误日志--
function error(str)
    if Player.PlayerType == 2 then
    	Util.LogError(str);
    end
end

--警告日志--
function logWarn(str)
    if Player.PlayerType == 2 then
    	Util.LogWarning(str);
    end
end

--查找对象--
function find(str)
	return GameObject.Find(str);
end

function destroy(obj)
	GameObject.Destroy(obj);
end

function newObject(prefab)
	return GameObject.Instantiate(prefab);
end

--销毁面板
function DestroyView(name)
    panelMgr:DestroyView(name);
end

--关闭面板
function CloseView(name)
    panelMgr:CloseView(name);
end

--调用隐藏出口来关闭面板，会执行HidePanel
function HideView(name)
    panelMgr:HideView(name);
end

--关闭所有面板
function CloseAllView()
    panelMgr:CloseAllView();
end

--获取子物体
function child(str)
    return transform:Find(str);
end

function subGet(childNode, typeName)		
	return child(childNode):GetComponent(typeName);
end

function GetComponentInChildren(parentTran,typeName)
    local cnt = parentTran.childCount
    for i=0,cnt-1 do
        local child = parentTran:GetChild(i)
        print(child.name)
        local tmpType = child:GetComponent(typeName);
        if tmpType~=nil then
            return tmpType;
        end
    end
    return nil
end

function findPanel(str) 
	local obj = find(str);
	if obj == nil then
		error(str.." is null");
		return nil;
	end
	return obj:GetComponent("BaseLua");
end
--local print = print
local tconcat = table.concat
local tinsert = table.insert
local srep = string.rep
local type = type
local pairs = pairs
local tostring = tostring
local next = next

function print_r(root)
	local cache = {  [root] = "." }
	local function _dump(t,space,name)
		local temp = {}
		for k,v in pairs(t) do
			local key = tostring(k)
			if cache[v] then
				tinsert(temp,"+" .. key .. " {" .. cache[v].."}")
			elseif type(v) == "table" then
				local new_key = name .. "." .. key
				cache[v] = new_key
				tinsert(temp,"+" .. key .. _dump(v,space .. (next(t,k) and "|" or " " ).. srep(" ",#key),new_key))
			else
				tinsert(temp,"+" .. key .. " [" .. tostring(v).."]")
			end
		end
		return tconcat(temp,"\n"..space)
	end
	print(_dump(root, "",""))
end

--分隔字符串
function Split(szFullString, szSeparator)
	local nFindStartIndex = 1
	local nSplitIndex = 1
	local nSplitArray = {}
	while true do
   	    local nFindLastIndex = string.find(szFullString, szSeparator, nFindStartIndex)
   	    if not nFindLastIndex then
   	        nSplitArray[nSplitIndex] = string.sub(szFullString, nFindStartIndex, string.len(szFullString))
            break
        end
        nSplitArray[nSplitIndex] = string.sub(szFullString, nFindStartIndex, nFindLastIndex - 1)
        nFindStartIndex = nFindLastIndex + string.len(szSeparator)
        nSplitIndex = nSplitIndex + 1
	end
	return nSplitArray
end

function traceback(msg)
    msg = debug.traceback(msg, 2)
    return msg
end

function LuaGC()
    local c = collectgarbage("count")
    Debugger.Log("Begin gc count = {0} kb", c)
    collectgarbage("collect")
    c = collectgarbage("count")
    Debugger.Log("End gc count = {0} kb", c)
end

function RemoveTableItem(list, item, removeAll)
    local rmCount = 0
    for i = 1, #list do
        if list[i - rmCount] == item then
            table.remove(list, i - rmCount)
            if removeAll then
                rmCount = rmCount + 1
            else
                break
            end
        end
    end
end

function IsNil(uobj)
    return uobj == nil or uobj:Equals(nil)
end

function isnan(number)
    return not(number == number)
end

function string:split(sep)
    local sep, fields = sep or ",", { }
    local pattern = string.format("([^%s]+)", sep)
    self:gsub(pattern, function(c) table.insert(fields, c) end)
    return fields
end

function GetDir(path)
    return string.match(fullpath, ".*/")
end

function GetFileName(path)
    return string.match(fullpath, ".*/(.*)")
end


function table.contains(table, element)
    if table == nil then
        return false
    end

    for _, value in pairs(table) do
        if value == element then
            return true
        end
    end
    return false
end

function table.getCount(self)
    local count = 0

    for k, v in pairs(self) do
        count = count + 1
    end

    return count
end

function DumpTable(t)
    for k, v in pairs(t) do
        if v ~= nil then
            Debugger.Log("Key: {0}, Value: {1}", tostring(k), tostring(v))
        else
            Debugger.Log("Key: {0}, Value nil", tostring(k))
        end
    end
end

function PrintTable(tab)
    local str = { }

    local function internal(tab, str, indent)
        for k, v in pairs(tab) do
            if type(v) == "table" then
                table.insert(str, indent .. tostring(k) .. ":\n")
                internal(v, str, indent .. ' ')
            else
                table.insert(str, indent .. tostring(k) .. ": " .. tostring(v) .. "\n")
            end
        end
    end

    internal(tab, str, '')
    return table.concat(str, '')
end

function printf(format, ...)
    Debugger.Log(string.format(format, ...))
end

function ReadFile(file)
    assert(file, "file open failed")
    local fileTab = { }
    local line = file:read()
    while line do
        table.insert(fileTab, line)
        line = file:read()
    end
    return fileTab
end

function WriteFile(file, fileTab)
    assert(file, "file open failed")
    for i, line in ipairs(fileTab) do
        --log("Write=" .. line)
        file:write(line)
        file:write("\n")
    end
end

function EXRandom(startnum,endnum,numtable)
    local srandnum = math.random(startnum,endnum);
    for i=1,#numtable do
        if srandnum == numtable[i] then
            return EXRandom(startnum,endnum,numtable);
        end
    end
    return srandnum;
end

function SavePlayerInfo(account,pwd)
    local tab = {};
    table.insert(tab, account)
    table.insert(tab, pwd)
    local filewrite = io.open(AppConst.AccountLogPath, "w")
    WriteFile(filewrite, tab)
    filewrite:close();
end

--将字符串转化为table
function stringToTable(str)
    local ret = loadstring("return "..str)()
    return ret
end


function _traceback(msg)
    mlogError("Sys", "----------------------------------------");
    mlogError("Sys", "LUA ERROR: " .. tostring(msg) .. "\n");
    io.flush ();
    mlogError("Sys", debug.traceback())
    mlogError("Sys", "----------------------------------------");
end

function debugcall(func, a1, a2, a3, a4, a5, a6, a7, a8)
    local dfunc = function()
        return func(a1, a2, a3, a4, a5, a6, a7, a8);
    end
    return xpcall(dfunc, _traceback);
end

function ContainKey(Key, tab)
    for k,v in pairs(tab) do
      if k == Key then
          return true
      end
    end
    return false
end

function ContainValue(value, tab)
    for k,v in pairs(tab) do
      if v == value then
          return true
      end
    end
    return false
end

function ShowHideObjchild(obj,IsHide)
    for i = 0, obj.transform.childCount - 1, 1 do
        if obj.transform:GetChild(i).gameObject.activeSelf ~= IsHide then
            obj.transform:GetChild(i).gameObject:SetActive(IsHide);
        end
    end
end

function UrlEncode(s)
     s = string.gsub(s, "([^%w%.%- ])", function(c) return string.format("%%%02X", string.byte(c)) end)  
    return string.gsub(s, " ", "+")  
end


function try(block)
    local main = block.main
    local catch = block.catch
    local finally = block.finally
    assert(main)
    -- try to call it
    local ok, errors = xpcall(main, debug.traceback)
    if not ok then
        -- run the catch function
        if catch then
            catch(errors)
        end
    end
    -- run the finally function
    if finally then
        finally(ok, errors)
    end
    -- ok?
    if ok then
        return errors
    end
end

function Copy(text)
    gameMgrMgr:Copy(text)
    panelMgr:CreatePanel("View/ShortNotice",{text=GeLanguageById(259)}); --"复制成功"
end

function GeLanguageById(id)
   if id==nil then return "" end
   return Language.LanguageService.Instance:GetFromFile("Language",tostring(id), tostring("error["..id.."]"),nil);
end

function UpdateLanguageByObj(obj,key)
    if obj==nil then return end
    obj.gameObject:GetComponent("LanguageText"):UpdateText(key)
 end

function ShowObjectAnim(obj)
    obj.transform.localScale = Vector3(0.3, 0.3, 0.3)
    obj:SetActive(true);
    coroutine.start(function()
        obj.transform:DOScale(1.1,0.2)
        coroutine.wait(0.2)
        obj.transform:DOScale(1,0.2)
    end)
    
end

function SetSpriteByUrl(url,obj)
    coroutine.start(
        function()
          local www = WWW(url)
          coroutine.www(www)
          if www.error ~= "" and www.error ~= nil then
              return
          end
          local texture = www.texture
          obj:GetComponent("Image").sprite = UnityEngine.Sprite.Create(texture, UnityEngine.Rect(0, 0, texture.width, texture.height), Vector2(0, 0))
        end)
end