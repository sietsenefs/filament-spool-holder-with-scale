# filament-spool-holder-with-scale
A adaptive filament spool holder with a build in scale to always see how much filament you have left.


## Goal
The goal of this project is to make an adaptive filament spool holder with built in scale so you can see how much filament you have left at all times. 
I also want everything in the 3D model to be parametric so everything can be changed and customized by future me or other people building upon this project

## Tools
Tools used in this project are:
* 3D printer / filament
* lasercutter
* arduino 
* small parts (ball bearaings, screws, nuts etc.)
* 20kg load cell
* fusion 360


## Versions

### Version 1
This is mainly a proof of concept of the filament holder. i want to have a working prototype. The priority is on making it work not to make it the best looking or have the best usabilty.

#### what i have done
- [x] Make a first itteration simple spool holder to built the interactive version with.
- [x] Make the spool holder adaptable for multiple spools (big, small, wide and narrow).

#### what i still want to add this version
- [ ] Make sure everything fits on the load cell and the spools fit on the spool holder.
- [ ] Make a bottom frame to be able to level the spool holder
- [ ] Design a overload protection 
- [ ] Make a compartment for the electronics (box to hide it in, maybe on the bottom frame to make it compact.) Version 2?



## Files
This is a guide to help you get around my files so you can adapt them and make them your own.

### Fusion 360
All 3D models are made in fusion 360 including the lasercut parts they are all made with user parameters. This means that instead of using precise measurements for everything i added "Keywords" as measurement and made a table where fusion can see what those keyword mean. For example instead of using "3mm" to indecate the thickness of the spool holder i added the parameter "plane_thickness" and used that so now you can change what that parameter means and the whole model gets updated.

#### Where can i find the user parameters?
The user parameters are located under: modify - change parameters.
once opened you can click on the expression on every parameter to edit the value of it.

#### Some usefull parameters
* bearring_poke_diameter | This is the inside measurement of your ball bearrings
* bearring_poke_height | this is half the depth of your ball bearring (minus 0.1 mm clearence)
* bearring_distance_between | this is the lenght between your ball bearings (higher = longer spool holder)
* bearring_distance_plane | distance from the ball bearring to the ground (higher = higher spool holder)

* mount_lenght | lenght of the mount plate (higher = higher max spool width)
