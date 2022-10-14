var possible = ['scissor', 'stone', 'paper']
var temp, temp1, temp2
var computerScore = 0
var userScore = 0
temp2 = 0

function my_fun2() {
    temp = 'scissor'
}

function my_fun3() {
    temp = 'stone'
}

function my_fun4() {
    temp = 'paper'
}

function my_fun() {
    temp2 = temp2 + 1
    document.getElementById('round').innerHTML = `Round :${temp2}`;
    temp1 = temp1 - 1;
    if (temp1 != 0) {
        var random_opt = possible[Math.floor(Math.random() * possible.length)]
        console.log(random_opt)
        if (temp == 'scissor') {
            if (random_opt == "paper") {
                document.getElementById('print').innerHTML = "You vs Computer <br> Scissor vs Paper <br> You win";
                userScore = userScore + 1;
            } else if (random_opt == "stone") {
                document.getElementById('print').innerHTML = "You vs Computer <br> Scissor vs Stone <br> Computer win";
                computerScore = computerScore + 1;
            } else {
                document.getElementById('print').innerHTML = "You vs Computer <br> Scissor vs Scissor <br> Match Tie";
                computerScore = computerScore + 1;
                userScore = userScore + 1;
            }
        } else if (temp == 'stone') {
            if (random_opt == "paper") {
                document.getElementById('print').innerHTML = "You vs Computer <br> Stone vs Paper <br> Computer win";
                computerScore = computerScore + 1;
            } else if (random_opt == "stone") {
                document.getElementById('print').innerHTML = "You vs Computer <br> Stone vs Stone <br> Match tie";
                computerScore = computerScore + 1;
                userScore = userScore + 1;
            } else {
                document.getElementById('print').innerHTML = "You vs Computer <br> Stone vs Scissor <br> You won";
                userScore = userScore + 1;
            }
        } else {
            if (random_opt == "paper") {
                document.getElementById('print').innerHTML = "You vs Computer <br> Paper vs Paper <br> Match tie";
                computerScore = computerScore + 1;
                userScore = userScore + 1;
            } else if (random_opt == "stone") {
                document.getElementById('print').innerHTML = "You vs Computer <br> Paper vs Stone <br> You won";
                userScore = userScore + 1;
            } else {
                document.getElementById('print').innerHTML = "You vs Computer <br> Paper vs Scissor <br> Computer won";
                computerScore = computerScore + 1;
            }
        }
    } else {
        if (computerScore > userScore) {
            var score = computerScore - userScore
            document.getElementById('print').innerHTML = `Computer won the match by ${score}`;
            window.alert('Computer won');
        } else if (computerScore < userScore) {
            var score = userScore - computerScore
            document.getElementById('print').innerHTML = `You won the match by ${score}`;
            window.alert('You won');
        } else {
            document.getElementById('print').innerHTML = "Match gets tie between both the teams";
            window.alert('Match Tie');
        }
        document.getElementById("sc").disabled = true;
        document.getElementById("st").disabled = true;
        document.getElementById("paper").disabled = true;
    }
    document.getElementById('user_score').innerHTML = userScore;
    document.getElementById('Computer_score').innerHTML = computerScore;
}

function myfun_1() {
    location.reload();
    document.getElementById("print").value = '';
}

function my_fun5() {
    temp1 = 5
    var div = document.getElementById("id1");
    div.style.display = "none";
    var div1 = document.getElementById("id2");
    div1.style.display = "block";
    var div2 = document.getElementById("id3");
    div2.style.display = "block";
    var div3 = document.getElementById("id4");
    div3.style.display = "block";
}

function my_fun6() {
    temp1 = 10
    var div = document.getElementById("id1");
    div.style.display = "none";
    var div1 = document.getElementById("id2");
    div1.style.display = "block";
    var div2 = document.getElementById("id3");
    div2.style.display = "block";
    var div3 = document.getElementById("id4");
    div3.style.display = "block";
}

function my_fun7() {
    temp1 = 15
    var div = document.getElementById("id1");
    div.style.display = "none";
    var div1 = document.getElementById("id2");
    div1.style.display = "block";
    var div2 = document.getElementById("id3");
    div2.style.display = "block";
    var div3 = document.getElementById("id4");
    div3.style.display = "block";
}