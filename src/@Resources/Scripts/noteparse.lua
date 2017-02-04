function ReadFileLines(FilePath)
	-- HANDLE RELATIVE PATH OPTIONS.
	FilePath = SKIN:MakePathAbsolute(FilePath)

	-- OPEN FILE.
	local File = io.open(FilePath)

	-- HANDLE ERROR OPENING FILE.
	if not File then
		print('NoteParse: unable to open file at ' .. FilePath)
		return
	end

	-- READ FILE CONTENTS AND CLOSE.
	local Contents = {}
	for Line in File:lines() do
		table.insert(Contents, Line)
	end

	File:close()

	return Contents
end

function Initialize()
	typesFile = ReadFileLines('../@Resources/notetypes.txt')
	Colors = {}
	Icons = {}
	
	for index,line in pairs(typesFile) do
		Colors[string.gsub(line, "^(.-)|.-|.-$", "%1")] = string.gsub(line, "^.-|(.-)|.-$", "%1")
		Icons[string.gsub(line, "^(.-)|.-|.-$", "%1")] = string.gsub(line, "^.-|.-|(.-)$", "%1")
	end


end

function Update()

	noteMeasure = SKIN:GetMeasure('Note')
	note = noteMeasure:GetStringValue()
	noteType = SELF:GetOption('Type')

	if noteType == "Type" then

		colorType = string.sub(note, 1,1)

		for t,c in pairs(Colors) do
			if colorType == t then return SKIN:GetVariable(c..'NoteColor', SKIN:GetVariable('DefaultColor', "255,255,255")) end
		end

		return SKIN:GetVariable('NoteColor', SKIN:GetVariable('DefaultColor', "255,255,255"))

	elseif noteType == "Title" then

		return string.gsub(note, "^.(.-)|.-$", "%1")

	elseif noteType == "Text" then

		return string.gsub(note, "^.-|(.-)$", "%1")

	elseif noteType == "Icon" then

		iconType = string.sub(note, 1,1)

		for t,i in pairs(Icons)do
			if iconType == t then return i end
		end

		return 'fa-sticky-note'
		
	else return end
 
end
