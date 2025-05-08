(defun main ()
	(setq main_i 0)
	(setq main_suma 0)
	(setq main_n 5)
	(setq main_i 0)
	(loop while (< main_i main_n) do
	(progn	(setf main_suma (+ main_suma main_i)))
	(setf main_i (+ main_i 1)))
	(princ main_suma)
	
)
 (main)
