function GetIconName(color)
  if string.match(color, 'color') then
    return 'icon_'..color..'.png'
  end
  return 'icon.png'
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