/*
  ==============================================================================

    CustomLookAndFeel.h
    Created: 13 Jan 2016 5:44:21pm
    Author:  Nutty

  ==============================================================================
*/

#ifndef CUSTOMLOOKANDFEEL_H_INCLUDED
#define CUSTOMLOOKANDFEEL_H_INCLUDED

//[Headers]
#include "JuceHeader.h"
#include "MouseOverKnob.h"
//[/Headers]

class CustomLookAndFeel : public LookAndFeel_V2 // our default design
{
public:
    //==============================================================================
    CustomLookAndFeel();
    virtual ~CustomLookAndFeel();
    //==============================================================================

    /**
    * Draw custom rotary slider with saturns if neccessary.
    */
    virtual void drawRotarySlider(Graphics &g, int x, int y, int width, int height, float sliderPosProportional, float rotaryStartAngle, float rotaryEndAngle, Slider &s);

    /**
    * Draw Custom linear Slider but replace LinearBar slider with custom vol and pan slider.
      If slider's min == -slider's max then draw pan otherwise draw volume.
    */
    virtual void drawLinearSlider(Graphics &g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle style, Slider &s);

    /**
    * Draw linear slider background.
    */
    virtual void drawLinearSliderBackground(Graphics &g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle style, Slider &s);

    /**
    * Draw linear slider thumb. Only draw custom if one thumb or TwoValueHorizontal otherwise draw default.
    */
    virtual void drawLinearSliderThumb(Graphics &g, int x, int y, int width, int height, float sliderPos, float minSliderPos, float maxSliderPos, const Slider::SliderStyle style, Slider &s);

    /**
    * Set Slider Layout. Needed for mouseOverKnob with barSlider to not set textBoxPosition into bar slider (leads to flickering).
    */
    virtual Slider::SliderLayout getSliderLayout(Slider& s);

    //==============================================================================

    /**
    * Draw custom button background.
    */
    virtual void drawButtonBackground(Graphics &g, Button &b, const Colour& c, bool isMouseOverButton, bool isButtonDown);

    /*
    * Draw custom toggle button. Delete the hasKeyboardFocus() rectangle sorrounding toggle.
    */
    virtual void drawToggleButton(Graphics &g, ToggleButton &b, bool isMouseOverButton, bool isButtonDown);

    /**
    * Draw custom toggle tick box.
    */
    virtual void drawTickBox(Graphics &g, Component &c, float x, float y, float width, float height, bool ticked, bool isEnabled, bool isMouseOverButton, bool isButtonDown);

    //==============================================================================

    /**
    * Draw how combo box is displayed on GUI without selection popup box.
    */
    virtual void drawComboBox(Graphics &g, int width, int height, bool isButtonDown, int buttonX, int buttonY, int buttonW, int buttonH, ComboBox &c);

    /**
    * Get combo box font. Needed to change combo box text font properties.
    */
    virtual Font getComboBoxFont(ComboBox &c);

    /**
    * Position combo box text. Needed to change combo box text label properties.
    */
    virtual void positionComboBoxText(ComboBox &c, Label &l);

    //==============================================================================

    /**
    * For customizing popup menu font.
    */
    virtual Font getPopupMenuFont();

    /**
    * For customizing popup menu background.
    */
    virtual void drawPopupMenuBackground(Graphics &g, int width, int height);

    /**
    * For customizing popup menu look.
    */
    virtual void drawPopupMenuItem(Graphics &g, const Rectangle< int > &area, bool isSeparator, bool isActive, bool isHighlighted, bool isTicked, bool hasSubMenu,
        const String &text, const String &shortcutKeyText, const Drawable *icon, const Colour *textColour);

    /*
    * For changing Font of value popup.
    */
    virtual Font getSliderPopupFont(Slider &s);

    /*
    * For changing position of value popup.
    */
    virtual int getSliderPopupPlacement(Slider &s);

//==============================================================================
private:
    /**
    * Draw modSources of rotary slider as saturn.
    @param g canvas to draw on
    @param s destination slider
    @param sourceValue current mod amount value
    @param unipolar true if modsource is unipolar otherwise bipolar
    @param centreX centre x position
    @param centreY centre y position
    @param radius radius of saturn of
    @param innerCircleSize is thickness of saturns where 0.0f is filled circle and 1.0f is barely visible saturn
    @param currentAngle current slider angle position
    @param rotaryStartAngle slider's minimum angle position
    @param rotaryEndAngle slider's maximum angle position
    */
    void drawModSource(Graphics &g, Slider &s, float sourceValue, bool unipolar, float centreX, float centreY, float radius, float innerCircleSize, float currAngle, float rotaryStartAngle, float rotaryEndAngle);
};

#endif  // CUSTOMLOOKANDFEEL_H_INCLUDED
