[Variables]
CornerEvent=idle

[BGMask]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\mask.png"
Greyscale=1
ImageTint=#CurrentColor#,[OpacityBG]
ImageFlip=Vertical
X=(#CurrentWMax#-[BGMask:W])
Y=0
DynamicVariables=1

[HorizontalBG]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBG]
X=(#CurrentWMax#-[Width]-#BoxPadding#*2-#GlowPadding#)
Y=#GlowPadding#
W=([Width]-[BGMask:W]+#BoxPadding#*2+#GlowPadding#)
H=([BGMask:H]-#GlowPadding#)
DynamicVariables=1

[VerticalBG]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBG]
X=(#CurrentWMax#-[Width]-#BoxPadding#*2-#GlowPadding#)
Y=[BGMask:H]
W=([Width]-#GlowPadding#+#BoxPadding#*2+#GlowPadding#)
H=([Height]-[BGMask:H]+#GlowPadding#+#BoxPadding#*2)
DynamicVariables=1

[BGMaskMini]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\mask_mini.png"
Greyscale=1
ImageTint=#CurrentColor#,[OpacityBGMini]
ImageFlip=Vertical
X=(#CurrentWMax#-[BGMaskMini:W])
Y=0
DynamicVariables=1

[HorizontalBGMini]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBGMini]
X=(#CurrentWMax#-[WidthMini]-#GlowPaddingMini#-#BoxPaddingMini#*2)
Y=#GlowPaddingMini#
W=([WidthMini]-[BGMaskMini:W]+#BoxPaddingMini#*2+#GlowPaddingMini#)
H=([BGMaskMini:H]-#GlowPaddingMini#)
DynamicVariables=1

[VerticalBGMini]
Meter=Image
SolidColor=#CurrentColor#,[OpacityBGMini]
X=(#CurrentWMax#-[WidthMini]-#BoxPaddingMini#*2-#GlowPaddingMini#)
Y=[BGMaskMini:H]
W=([WidthMini]+#BoxPaddingMini#*2)
H=([HeightMini]-[BGMaskMini:H]+#GlowPaddingMini#+(#BoxPaddingMini#*2))
DynamicVariables=1

[Anchor]
Meter=Image
SolidColor=0,0,0,0
X=(#CurrentWMax#-[Width]-#BoxPadding#-#GlowPadding#)
Y=(#GlowPadding#+#BoxPadding#)
W=0
H=0
DynamicVariables=1

[AnchorMini]
Meter=Image
SolidColor=0,0,0,0
X=(#CurrentWMax#-[WidthMini]-#BoxPaddingMini#-#GlowPaddingMini#)
Y=(#BoxPaddingMini#+#GlowPaddingMini#)
W=0
H=0
DynamicVariables=1

[Corner]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\#CornerEvent#.png"
X=(#CurrentWMax#-[Corner:W])
Y=0
Greyscale=1
ImageTint=#CurrentColor#,[OpacityMain]
ImageFlip=Vertical
DynamicVariables=1
MouseOverAction=[!SetVariable "CornerEvent" "hover"][!Redraw]
MouseLeaveAction=[!SetVariable "CornerEvent" "idle"][!Redraw]
LeftMouseUpAction=[!WriteKeyValue "Variables" "#CurrentWidget#Mini" "[ChangeType]" "#@#settings.inc"][!SetOptionGroup "MiniControl" "IsMini" "[ChangeType]"][!SetOption "ChangeType" "String" "[ChangeType]"][!Redraw]

[CornerMini]
Meter=Image
ImageName="#@#images\corners\#CurrentCorners#\#CornerEvent#_mini.png"
X=(#CurrentWMax#-[CornerMini:W])
Y=0
ImageFlip=Vertical
Greyscale=1
ImageTint=#CurrentColor#,[OpacityMainMini]
DynamicVariables=1
