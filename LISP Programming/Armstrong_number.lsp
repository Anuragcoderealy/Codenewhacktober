; This is a Lisp file which can be executed using appropriate Lisp interpreter or Lisp file can also be executed online using Lisp interpreter easily.
; I have written a program in LISP to check whether a number is an armstrong number or not.
; A positive integer having n digits is called an Armstrong number of order n if (abcd... = a^n + b^n + c^n + d^n + ...)
; Firstly I have created a function ArmCheck() and in the last I have called the function
; ArmCheck() function checks the input number guven from STDIN and prints whether the number is an armstrong number or not

(defun ArmCheck()
(terpri)  ;for giving an extra line break
(setq checknum (read)) ; Assigning (checknum = number read from STDIN)
(princ "Number Entered from STDIN : ")
(write checknum)
(setq digitofnum (length (write-to-string checknum))) ; calculating number of digits in the checknum
(setq sum 0) ; sum = 0
(setq temp checknum) ; temp = checknum
(loop while (> temp 0) ; while (temp > 0)
  do (setq digit (mod temp 10)) ; digit = temp % 10
     (setq sum (+ sum (expt digit digitofnum))) ; sum = sum + digit ^ digitofnum
     (setq temp (floor temp 10)) ; temp = temp / 10
)
(if (= sum checknum) ; checking if sum is equal to checknum
   (format t "~% ~d is an Armstrong number !!!" checknum)
(format t "~% ~d is not an Armstrong number !!!" checknum))
)
(ArmCheck)

; Input from STDIN      Output
;   52                52 is not an Armstrong number
;   153               153 is an Armstrong number
;   190               190 is not an Armstrong number
;   2890              2890 is not an Armstrong number
;   407               407 is an Armstrong number
