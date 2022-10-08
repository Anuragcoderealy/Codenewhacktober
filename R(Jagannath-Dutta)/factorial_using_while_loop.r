fact<-function(n){
  fact=1
  if(n==0 || n==1)
    return(1)
  else
    while(n>1){
      fact=fact*n
      n=n-1
    }
  return(fact)
}
print(fact(5))