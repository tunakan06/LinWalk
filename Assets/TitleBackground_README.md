# Title Pattern Background — Usage

This project includes a small editor utility that adds a subtle, scrollable patterned background to a Canvas in your title scene.

## How to Run

1. Open the scene you want to modify (the title screen) in Unity Editor.
2. From the top menu choose: Tools → Title Screen → Add Pattern Background
   - If no Canvas exists one will be created.
   - A GameObject named `TitlePattern_Background` (RawImage + ProceduralStripedBG) will be added as the first child of the Canvas.
   - The scene will be marked dirty and saved automatically.

## Tweak Appearance
- Select the `TitlePattern_Background` GameObject in the Hierarchy.
- Inspect the `ProceduralStripedBG` component and adjust:
  - `tileSize`, `widthTiles`, `heightTiles` — pattern density
  - `colorA` (alpha controls subtlety) and `colorB`
  - `scrollSpeed` — how fast the pattern moves
  - `diagonalStripes` — toggle diagonal/vertical stripes

## Notes
- The RawImage created has `raycastTarget = false` so it won't block UI interactions.
- This tool modifies the currently open scene in the Editor — it does not change build settings.
