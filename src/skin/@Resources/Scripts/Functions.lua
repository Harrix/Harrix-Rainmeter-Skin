function ConvertHexToRgb(hex)
  hex = hex:gsub('#', '')
  if #hex ~= 6 then return '255,255,255' end
  local r = tonumber(hex:sub(1, 2), 16)
  local g = tonumber(hex:sub(3, 4), 16)
  local b = tonumber(hex:sub(5, 6), 16)
  return r .. ',' .. g .. ',' .. b
end

function ConvertPercentToHex(percent)
  return ('%02X'):format(math.floor(255 * percent / 100))
end

function ConvertPercentToDec(percent)
  return math.floor(255 * percent / 100)
end

function ConvertYesNoToNumber(value)
  if value == 'Yes' then
    return 1
  end
  return 0
end

function MainStringOrWithAdditional(mainString, additionalString, hideAdditional)
  if hideAdditional == 'No' then
    return mainString..' '..additionalString
  end
  return mainString
end
