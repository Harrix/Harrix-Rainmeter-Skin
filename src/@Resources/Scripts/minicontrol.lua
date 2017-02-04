function Update()

	IsMini      = SELF:GetOption('IsMini')
	Value       = SELF:GetOption('Value')
	ValueMini   = SELF:GetOption('ValueMini')

	if IsMini == '1' then
		return Value
	else
		return ValueMini
	end

end