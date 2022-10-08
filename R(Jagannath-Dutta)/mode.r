mode=function(){
  return(sort(-table(iris$Sepal.Length))[1])
}
print(mode())
