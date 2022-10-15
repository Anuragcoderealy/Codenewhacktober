const button=document.querySelector("button");

const SpeechRecognition=window.SpeechRecognition || window.webkitSpeechRecognition;

const recognition=new SpeechRecognition();

recognition.onstart=function(){
  console.log("Speech Recognition strated")
};

recognition.onresult= function(event){
  console.log(event);

const spokenwords = event.results[0][0].transcript;
//const spokenwords=event.results[0][0].transcript;

console.log("spoken words are",spokenwords);
computerSpeech(spokenwords);
};

function computerSpeech(words){
  const speech = new SpeechSynthesisUtterance();
  speech.lang = "en-US";
  speech.pitch = 0.5;
  speech.volume = 5;
  speech.rate = 1;
//speech.text = words;
  //determineWords(speech, words);

determineWords(speech, words);
  window.speechSynthesis.speak(speech);
  }
   function determineWords(speech, words){
    if(words.includes("how are you")){
      speech.text = "I am fine, thank you!";
    }
     
    if(words.includes("open Google for me")){
      speech.text = "Opening Google for you  now!";
      window.open("https://www.google.com");
    }
   }
/* function determineWords(speech, words){
    if(words.include("how are you")){
      speech.text = "I am fine,thank you!";
    }
  }*/


button.addEventListener("click",()=> {
  recognition.start();
});






