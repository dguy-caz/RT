# RT

42 school graphic group project (4 students)
Second part of RTv1

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

## other features
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

 ### Mouvements:
* Translate: `W, A, S, D`
* Rotate: `UP, LEFT, DOWN, RIGHT`
* Lift: `Q, E`
* Pivot: `Z, X`


### Render mode:
* Pixelisation: `SPACE`
* Edit mode: `ENTER`
* Anti-aliasing: `R`
* Stereoscopy: `P`
* Ambient occlusion: `T`
* Cell-shading: `C`
* Filter: `0, 1, 2, 3, 4...`

### Save / import :</h2><br />
* Save image: `O`
* Save scene: `J`
* Load object: `K`
* Load scene: `L`
* Copy / paste object: `LMB`
* Delete object: `RMB`


### Others :</h3><br />

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
  "disk", "triangle", "quad", "pyramide", "cube", "glass", "paraboloid".
* For the lights it's : "light", "area_light"

Check in the scenes/basic directory for the complete format of all objects.

## Examples

![screenshot_392018_171118](https://user-images.githubusercontent.com/27351943/37294364-f202237c-2615-11e8-868e-4aa78b797bec.png)

![image 3](https://user-images.githubusercontent.com/27351943/37253487-96c84d94-2532-11e8-8616-81b5ee1ac6e3.png)

![screenshot_2202018_11582](https://user-images.githubusercontent.com/27351943/37253276-ee2d4470-252f-11e8-95cb-3bef9bbbad61.png)


![image 1](https://user-images.githubusercontent.com/27351943/37253298-40b1b334-2530-11e8-984e-f449f91e8b5a.png)

![screen shot 2018-02-28 at 8 05 50 pm](https://user-images.githubusercontent.com/27351943/37253303-57992546-2530-11e8-9f2c-7f0b4e9ccff6.png)


![image](https://user-images.githubusercontent.com/27351943/37253311-6b7e8164-2530-11e8-89f9-2464825515c7.png)

![screen shot 2018-02-27 at 1 13 05 am](https://user-images.githubusercontent.com/27351943/37253322-90982374-2530-11e8-912b-135bb5e03495.png)

![screen shot 2018-02-27 at 9 29 26 am](https://user-images.githubusercontent.com/27351943/37253323-90c8207e-2530-11e8-9034-f8737677a84a.png)

![screen shot 2018-02-07 at 10 47 15 pm](https://user-images.githubusercontent.com/27351943/37253368-388ac500-2531-11e8-900a-981875fc4619.png)

![screen shot 2018-02-09 at 3 48 36 am](https://user-images.githubusercontent.com/27351943/37253369-38c63e96-2531-11e8-93a1-f22306bfe78f.png)

![screen shot 2018-02-16 at 3 49 51 pm](https://user-images.githubusercontent.com/27351943/37253370-38f33f54-2531-11e8-8a29-d72cb727e28d.png)

![image 2](https://user-images.githubusercontent.com/27351943/37253372-39236e04-2531-11e8-8b36-e1b81ac6acac.png)


![screen shot 2018-03-11 at 1 37 01 pm](https://user-images.githubusercontent.com/27351943/37253395-686c3132-2531-11e8-8db6-f6a1b188b76d.png)


Enjoy !
