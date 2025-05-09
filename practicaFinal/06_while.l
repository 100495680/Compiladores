(setq cnt 0)
(defun main ()
	(loop while (< cnt 3) do
	(progn	(princ cnt)
	
	(setf cnt (+ cnt 1))))
)
 (main)
