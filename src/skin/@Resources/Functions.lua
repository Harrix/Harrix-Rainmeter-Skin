function ConvertToHex(color) -- Converts RGB colors to HEX
  local hex = {}
  for rgb in color:gmatch('%d+') do
    table.insert(hex, ('%02X'):format(tonumber(rgb)))
  end
  return table.concat(hex)
end

function ConvertPercentToHex(percent) -- Converts percent of opacity to HEX alpha
  return ConvertToHex(tostring(math.floor(255 * percent / 100)))
end
