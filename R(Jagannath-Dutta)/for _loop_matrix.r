m<-matrix(2:15,2,byrow=T)
for(r in seq(nrow(m))){
  for(c in seq(ncol(m))){
    print(m[r,c])
  }
}