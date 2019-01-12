function Initialize()
  SavedMaxW = nil
end

function Update()
    RightStringMeters()
end

function RightStringMeters()
  StringMeters = {
    SKIN:GetMeter ('MeterTime'),
    SKIN:GetMeter ('MeterDate'),
  }

  local W = {}
  local Y = {}
  for i,v in ipairs(StringMeters) do
    W[i] = v:GetW()
    Y[i] = v:GetY()
  end

  local MaxW = 0

  for i,v in ipairs(W) do
    if v > MaxW then MaxW = v end
    end

  if MaxW ~= SavedMaxW then
    local WindowsX = SKIN:GetVariable('CURRENTCONFIGX', nil)
    local WindowsY = SKIN:GetVariable('CURRENTCONFIGY', nil)

    SKIN:Bang('!MoveMeter', MaxW, Y[1], 'MeterTime')
    SKIN:Bang('!MoveMeter', MaxW, Y[2], 'MeterDate')

    if (SavedMaxW ~= nil) then
      SKIN:Bang('!Move "'..(WindowsX + (SavedMaxW - MaxW))..'" "'..WindowsY..'"')
    end

    SavedMaxW = MaxW
  end
end