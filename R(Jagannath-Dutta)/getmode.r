getmode<-function(v){
 uniqv<-unique(v)
 uniqv[which.max(tabulate(match(v,uniqv)))]
}
getmode(iris$Sepal.Length)