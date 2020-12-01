--音频剪辑的名字
local platform_music = {}
platform_music[1]={id=1,music_id="platform_background",scene="大厅登陆"}
platform_music[2]={id=2,music_id="click",scene="点击"}
platform_music[3]={id=3,music_id="quite",scene="关闭"}
platform_music[4]={id=4,music_id="countDown",scene="倒计时"}
platform_music[5]={id=5,music_id="dianzanDaoda",scene="倒计时"}
platform_music[6]={id=6,music_id="dianzanFeixing",scene="倒计时"}
platform_music[7]={id=7,music_id="feiwenDaoda",scene="倒计时"}
platform_music[8]={id=8,music_id="feiwenFeixing",scene="倒计时"}
platform_music[9]={id=9,music_id="jidanDaoda",scene="倒计时"}
platform_music[10]={id=10,music_id="jidanFeixing",scene="倒计时"}
platform_music[11]={id=11,music_id="niushiDaoda",scene="倒计时"}
platform_music[12]={id=12,music_id="niushiFeixing",scene="倒计时"}
platform_music[13]={id=13,music_id="shuitongDaoda",scene="倒计时"}
platform_music[14]={id=14,music_id="shuitongFeixing",scene="倒计时"}
platform_music[15]={id=15,music_id="xianhuaDaoda",scene="倒计时"}
platform_music[16]={id=16,music_id="xianhuaFeixing",scene="倒计时"}
platform_music[17]={id=17,music_id="SE_prize",scene="恭喜获得"}
function conf_platform_music_get(id)
 return platform_music[id]
end

function conf_platform_music_max_get()
 return platform_music
end
