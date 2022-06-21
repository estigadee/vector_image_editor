# Vector Image Editor

The vector image application can order firgures in a vector image. It has the following methods:

## open < file >

Read file contents and load it into the memory. Elements, that do not have the specified format are ignored.

### Example
```
> open figures.svg
Successfully opened figures.svg
```

## print

Print the read figures from the file.

### Example
```
> print
rectangle 5 5 10 10 green orange
circle 5 5 10 blue green
rectangle 100 60 10 10 red white
```

## create < figure_type > < figure_components >

Create new figure and add it to the image. Every figure has its own unique id.

* figure_type:
    - intercept
    - circle
    - rectangle
    - polygon

* figure_component:
    - intercept - (x0, y0), (x1, y1)coordinates; contour color; 
    - circle - centre(x0, y0) and radius coordinates; contour color; inside color (or transparent)
    - rectangle - (x0, y0) coordinates of the upper left angle; contour color; inside color (or transparent)
    - polygon - consistent angles coordinates (x0,y0)...(xN,yN); contour color; inside color (or transparent)

## group < region >

Group all the figures that are in the mentioned region in new element. The result is a new figure.

```
Methods can be applied only on a figure, not on separate element of it.
```

### Example
```
> group 10 10 15 15
```

## ungroup < id >

Ungrouping elements from a figure destroys the figure and allows every element to be modified independently. 

## bring forward < id > < n >

Move element forward in stack.

* < n > is the number of levels to move (Numbering of levels strarts from the bottom)

### Example

```
> bring forward 2 2
```

## send backward < id > < n >

Move element backward in stack.

* < n > is the number of levels to move (Numbering of levels strarts from the bottom)

### Example

```
> bring backward 2 2
```

## translate < id > vertical=< v > horizontal=< h >

Translate an element of the image, only if the *id* is given, otherwise translates all image elements.

### Example

```
> translate 2 vertical=10 horizontal=100
> print
rectangle 5 5 10 10 green orange
rectangle 110 160 10 10 red white
circle 5 5 10 blue green
```

## scale < id > < width_coeff > < height_coeff >

Scale an element of the image, only if the *id* is given, otherwise scales all image elements.

### Example

```
> scale 1 2 3
> print
rectangle 5 5 20 30 green orange
rectangle 110 160 10 10 red white
circle 5 5 10 blue green

```

## rotate < id > < angle_in_degreece >

Rotate an element of the image, only if the *id* is given, otherwise rotates all image elements. The center of the rotation is is the center of the rectangle that surrounds the element(s).

## save / save as < format >

* save - save as default format()
* save as < format > - one of: 
    * ppn
    * bmp
    * svg
    * other

## help

Shows the supported application methods.