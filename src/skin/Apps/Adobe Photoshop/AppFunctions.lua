function GetIconName(color, icon)
  iconPrefix = string.gsub(icon, "icon", "")
  if string.match(color, 'color') then
    return 'icon'..iconPrefix..'_'..color..'.png'
  end
  return 'icon'..iconPrefix..'.png'
end

function GetColorName(color)
  if string.match(color, 'color') then
    return 'FFFFFF'
  end
  return color
end

function GetColorNameForInput(color)
  if string.match(color, 'color') then
    return color
  end
  return '#'..color
end