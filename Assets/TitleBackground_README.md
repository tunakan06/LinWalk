# Title Background Pattern Tool

## Overview
This tool provides an easy way to add a subtle, scrollable patterned background to Unity scenes (especially title screens) without manually modifying scene files.

## Usage

### Adding a Pattern Background
1. Open the scene where you want to add the background (e.g., your title screen scene)
2. In the Unity Editor menu, go to: **Tools → Title Screen → Add Pattern Background**
3. The tool will:
   - Create a Canvas if one doesn't exist
   - Add a fullscreen RawImage named `TitlePattern_Background` at the back of the Canvas
   - Attach the `ProceduralStripedBG` component with default subtle pattern settings
   - Save the scene

### What Gets Created
- **Canvas**: If your scene doesn't have a Canvas, one will be created with:
  - CanvasScaler (1920x1080 reference resolution)
  - GraphicRaycaster
  
- **TitlePattern_Background**: A RawImage GameObject with:
  - Fullscreen RectTransform (anchors set to 0,0 → 1,1, offsets to 0)
  - `raycastTarget` disabled (won't interfere with UI interactions)
  - Positioned as the first child of Canvas (rendered behind all other UI)
  - `ProceduralStripedBG` component attached

### Customizing the Pattern
After adding the background, you can customize it in the Inspector by selecting `TitlePattern_Background`:

**ProceduralStripedBG Component Parameters:**
- **tileSize** (default: 64): Size of each tile in the pattern
- **widthTiles** (default: 8): Number of horizontal tiles
- **heightTiles** (default: 6): Number of vertical tiles
- **colorA** (default: white with 0.08 alpha): First stripe color (subtle white)
- **colorB** (default: transparent): Second stripe color
- **scrollSpeed** (default: 0.5): Speed of pattern scrolling animation
- **diagonalStripes** (default: true): Whether stripes are diagonal or vertical

### Tips
- Keep the alpha values low (0.05-0.15) for a subtle background effect
- Adjust `scrollSpeed` to control animation intensity
- Toggle `diagonalStripes` for different visual styles
- The pattern texture is generated procedurally at runtime

### Notes
- If a `TitlePattern_Background` already exists, the tool will ask if you want to replace it
- The tool doesn't automatically modify existing scenes - you must run it manually
- Changes are saved automatically when the background is added
