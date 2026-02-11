# Title Pattern Background Tool

This document describes how to use the Editor utility to add a subtle patterned background to your Unity scenes.

## Overview

The **Add Pattern Background** tool creates a full-screen, subtle striped pattern background using a procedurally generated texture. The pattern:
- Automatically scrolls diagonally for a dynamic effect
- Uses very low alpha (transparency) to remain subtle and not distract from your UI
- Is placed behind all other UI elements
- Does not block UI raycasts

## How to Use

1. **Open your scene** in the Unity Editor (e.g., your title screen scene)
2. In the Unity menu bar, navigate to **Tools → Title Screen → Add Pattern Background**
3. The tool will:
   - Create a Canvas if one doesn't exist (configured for Screen Space - Overlay)
   - Add a "TitlePattern_Background" GameObject with RawImage and ProceduralStripedBG components
   - Configure the pattern with sensible defaults
   - Prompt you to save the scene
4. The newly created background will be selected in the Hierarchy

## Customizing the Pattern

After running the tool, you can customize the pattern by selecting the "TitlePattern_Background" object in the Hierarchy and adjusting the **ProceduralStripedBG** component parameters in the Inspector:

### Available Parameters:

**Tile Settings:**
- **Tile Size** (default: 64) - Size of the procedural texture tile in pixels
- **Width Tiles** (default: 8) - Number of horizontal tile repeats
- **Height Tiles** (default: 6) - Number of vertical tile repeats

**Colors:**
- **Color A** (default: white with 0.08 alpha) - First stripe color (subtle white)
- **Color B** (default: transparent) - Second stripe color (transparent)
  - *Tip: Adjust the alpha channel to control subtlety*

**Scrolling:**
- **Scroll Speed** (default: 0.5) - Speed of pattern animation
  - *Set to 0 for a static pattern*
- **Diagonal Stripes** (default: true) - Enable/disable diagonal stripe orientation
  - *When false, stripes are vertical*

## Notes

- The background is placed as the first child of the Canvas, ensuring it renders behind other UI elements
- The RawImage's `raycastTarget` is disabled so it won't interfere with UI interactions
- If a "TitlePattern_Background" already exists in the scene, the tool will ask if you want to replace it
- After adding the background, you'll be prompted to save the scene

## Troubleshooting

**"No Scene Open" error:**
- Make sure you have a scene open in the Unity Editor before running the tool

**Background appears in front of UI:**
- Check that the "TitlePattern_Background" is the first child in the Canvas hierarchy
- You can manually drag it to the top of the Canvas children in the Hierarchy window

**Pattern is too visible/distracting:**
- Reduce the alpha value of Color A (try values between 0.02 and 0.1)
- Or set Color B to a complementary subtle color instead of transparent

**Pattern isn't scrolling:**
- Make sure the Scroll Speed is greater than 0
- Check that the game is running (pattern only animates in Play mode)
