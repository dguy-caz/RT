# RT

42 school graphic group project (<strong>4 students</strong>). Second part of RTv1.

Creation of a program able to generate images according to raytracing protocol.

Those computer generated images will each represent a scene, from a specific angle and position, defined by simple geometric objects, and each with its own lighting system.

## My work (features)
* Figures: sphere, plane, cylinder, cone, triangle, paraboloid
* Shadows
* Multi-light spots
* Camera setup and movements (with matrix)
* Stereoscopy (system with 2 cameras)
* part of parsing
* part of texturing (skybox)

## Other features
* Figures: disk, cube
* Refraction, reflection, transparency
* ambient, occlusion, cel-shading, filter
* texturing, perturbation
* Anti-Aliasing, pixelisation
* Live edition, copy, add, delete object, import 3D object
* Save scene file
* screenshot

## Compile & run
```
make
```
```
./rt scenes/[file scene]
```

 ## Commands
 ### Mouvements
* Translate: `W, A, S, D`
* Rotate: `UP, LEFT, DOWN, RIGHT`
* Lift: `Q, E`
* Pivot: `Z, X`

### Render mode
* Pixelisation: `SPACE`
* Edit mode: `ENTER`
* Anti-aliasing: `R`
* Stereoscopy: `P`
* Ambient occlusion: `T`
* Cell-shading: `C`
* Filter: `0, 1, 2, 3, 4...`

### Save / import
* Save image: `O`
* Save scene: `J`
* Load object: `K`
* Load scene: `L`
* Copy / paste object: `LMB`
* Delete object: `RMB`


### Others
* Random perlin: `M`
* Remove ambient: `I`
* Add recursion: `U`
* Strech texture: `=, /`
* Rotate texture: `-, +`

## Files formats
* 3D objects must be set in .obj format
* Textures must be set on .xpm format
* Description scene must be set on .rt format

## Input file format
* The scene and all the object are describe between '{' and '}'.
* The objects set by our RT are : "plane", "sphere", "cone", "cylinder"
  "disk", "triangle", "quad", "pyramide", "cube", "glass", "paraboloid"
* For the lights it's : "light", "area_light"

Check in the scenes/basic directory for the complete format of all objects.

## Examples

![image](https://user-images.githubusercontent.com/28509576/40065266-afada644-5861-11e8-9905-ed83b6d73ada.png)
![image](https://user-images.githubusercontent.com/28509576/40069811-a244f682-586c-11e8-93e5-2642de0aa2c6.png)
![image](https://user-images.githubusercontent.com/28509576/40066088-a73b4d48-5863-11e8-9509-a44bc3bf1321.png)
![image](https://user-images.githubusercontent.com/28509576/40065969-523844b8-5863-11e8-8198-d3c7af6ba477.png)
![image](https://user-images.githubusercontent.com/28509576/40065321-cb46d25e-5861-11e8-8cf6-f942255cbd1b.png)
![image](https://user-images.githubusercontent.com/28509576/40065328-ce39996a-5861-11e8-8084-01fba14f16c1.png)
![image](https://user-images.githubusercontent.com/28509576/40066269-0cc70c6a-5864-11e8-8e69-e2ff5c6d152a.png)
![image](https://user-images.githubusercontent.com/28509576/40065338-d3da40d6-5861-11e8-89b9-49773006041b.png)
![image](https://user-images.githubusercontent.com/28509576/40065343-d68c76be-5861-11e8-88bb-c007daecf9a1.png)
![image](https://user-images.githubusercontent.com/28509576/40065345-d907676e-5861-11e8-86e4-35a38a251ac8.png)
