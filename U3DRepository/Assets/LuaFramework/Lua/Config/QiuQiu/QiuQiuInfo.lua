local QiuQiuInfo={}
QiuQiuInfo[0]={Icon="Poker0"}
QiuQiuInfo[1]={Icon="Poker1"}
QiuQiuInfo[2]={Icon="Poker2"}
QiuQiuInfo[3]={Icon="Poker3"}
QiuQiuInfo[4]={Icon="Poker4"}
QiuQiuInfo[5]={Icon="Poker5"}
QiuQiuInfo[6]={Icon="Poker6"}
QiuQiuInfo[11]={Icon="Poker7"}
QiuQiuInfo[12]={Icon="Poker8"}
QiuQiuInfo[13]={Icon="Poker9"}
QiuQiuInfo[14]={Icon="Poker10"}
QiuQiuInfo[15]={Icon="Poker11"}
QiuQiuInfo[16]={Icon="Poker12"}
QiuQiuInfo[22]={Icon="Poker13"}
QiuQiuInfo[23]={Icon="Poker14"}
QiuQiuInfo[24]={Icon="Poker15"}
QiuQiuInfo[25]={Icon="Poker16"}
QiuQiuInfo[26]={Icon="Poker17"}
QiuQiuInfo[33]={Icon="Poker18"}
QiuQiuInfo[34]={Icon="Poker19"}
QiuQiuInfo[35]={Icon="Poker20"}
QiuQiuInfo[36]={Icon="Poker21"}
QiuQiuInfo[44]={Icon="Poker22"}
QiuQiuInfo[45]={Icon="Poker23"}
QiuQiuInfo[46]={Icon="Poker24"}
QiuQiuInfo[55]={Icon="Poker25"}
QiuQiuInfo[56]={Icon="Poker26"}
QiuQiuInfo[66]={Icon="Poker27"}
 function GetPokerIcon(index)
         local PokerInfo=QiuQiuInfo[index];
         if PokerInfo ~=nil then
         return PokerInfo
         else
            Util.LogError("没有查找的牌信息"..index);
         end
end