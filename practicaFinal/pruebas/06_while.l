(defun main ()
	(setq main_cnt 0)
	(loop while (< main_cnt 3) do
	(progn	(princ main_cnt)
	
	(setf main_cnt (+ main_cnt 1))))
)
 (main)
