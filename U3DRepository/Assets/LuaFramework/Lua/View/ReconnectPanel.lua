

ReconnectPanel = {
    transform;
    gameObject;
    LuaBehaviour;
};
local self = ReconnectPanel;

function ReconnectPanel.Awake(obj)
    self.gameObject = obj;
    self.transform = self.gameObject.transform;
    self.LuaBehaviour = self.gameObject:GetComponent('LuaBehaviour');
    
    self.FindComponent();
    self.AddOnClickEvent();
end

function ReconnectPanel.FindComponent()
	self.Panel = self.transform:Find('Bg/Panel').gameObject;
end

function ReconnectPanel.AddOnClickEvent()
end

function ReconnectPanel.Init(data)
    if data.funname ~= nil then
        funname = data.funname;
        funname();
    end

end

function ReconnectPanel.Update()
    
end

function ReconnectPanel.Start()
end
