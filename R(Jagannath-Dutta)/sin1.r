sin1<-function(x){
  sum=x
  comp=x
  n=1
  repeat{
    comp=-comp*x^2
    sum=sum+(comp/factorial(2*n+1))
    if(abs(comp/factorial(2*n+1))<0.00001){
      break
    }
    n=n+1
  }
  return(sum)
}
sin1(0.1)
sin(0.1)