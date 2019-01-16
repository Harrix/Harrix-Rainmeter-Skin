function GetIconName(color)
  if color == 'Colorful' then
    return 'icon_color.png'
  end
  return 'icon.png'
end

function GetColorName(color)
  if color == 'Colorful' then
    return 'FFFFFF'
  end
  return color
end

function GetColorNameForInput(color)
  if color == 'Colorful' then
    return color
  end
  return '#'..color
end