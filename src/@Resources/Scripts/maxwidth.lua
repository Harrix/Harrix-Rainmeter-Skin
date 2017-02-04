function Update()

	Widths = {}
	Min = SELF:GetOption('Min')
	Names = string.gsub(SELF:GetOption('Names'), "(%w+)", function (name)
		tmpMeter = SKIN:GetMeter(name)
		table.insert(Widths, tmpMeter:GetW())
	end)

	MaxWidth = math.max(Min, unpack(Widths))
	return MaxWidth
	
end