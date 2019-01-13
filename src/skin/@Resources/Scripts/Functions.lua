function ConvertPercentToHex(percent) -- Converts percent of opacity to HEX alpha
  return ('%02X'):format(math.floor(255 * percent / 100))
end

function ConvertPercentToDec(percent) -- Converts percent of opacity to DEC alpha
  return math.floor(255 * percent / 100)
end
