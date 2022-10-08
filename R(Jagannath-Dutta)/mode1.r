mode1=function(){
  return(sort(table(iris$Sepal.Length))[length(unique(iris$Sepal.Length))])
}
print(mode1())