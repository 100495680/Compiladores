(defun square (square_v )
	(* square_v square_v)
)
	
(defun sum (sum_x  sum_y )
	(+ sum_x sum_y)
)
	
(defun main ()
	(setq main_r1 0)
	(setq main_r2 0)
	(setf main_r1 (square 7 ))
	(setf main_r2 (sum 3  4 ))
	(princ main_r1)
	(princ main_r2)
	
	(square 5 )
)
 (main)
