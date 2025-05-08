(setq arr (make-array 5))

(defun main ()
	(setq main_i 0)
	(setq main_i 0)
	(loop while (< main_i 5) do
	(progn	(setf (aref arr main_i) (* main_i 2)))
	(setf main_i (+ main_i 1)))
	(princ (aref arr 0))
	(princ (aref arr 1))
	(princ (aref arr 2))
	(princ (aref arr 3))
	(princ (aref arr 4))
	
)
 (main)
