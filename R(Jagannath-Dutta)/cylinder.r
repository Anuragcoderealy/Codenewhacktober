cylinder<-function(diameter,length){
  volume<-pi*diameter^2*length/4
  return(volume)
}
print(cylinder(5,3))