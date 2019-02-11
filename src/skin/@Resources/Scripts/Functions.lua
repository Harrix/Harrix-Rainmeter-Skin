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
