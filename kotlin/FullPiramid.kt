package testLogic.piramid

fun main() {

    // piramid bintang
    /*var rows = 5
    var k = 0

    for (i in 1..rows) {
        for (space in 1..rows - i) {
            print("  ")
        }
        while (k != 2 * i - 1) {
            print("* ")
            ++k
        }
        println()
        k = 0
    }*/


    //piramid angka
    var rows = 5
    var k = 0
    var count = 0
    var count1 = 0

    for (i in 1..rows){
        for (space in 1..rows - i){
            print("  ")
            ++count
        }
        while (k != 2 * i - 1){
            if(count <= rows - 1){
                print((i + k).toString() + " ")
                ++count
            }else{
                ++count1
                print((i + k - 2 * count1).toString() + " ")
            }
            ++k
        }
        k = 0
        count = k
        count1 = count
        println()
    }


}