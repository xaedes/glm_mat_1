# glm_mat_1

Unfortunately glm does not support vectors with one entry or matrices with one row or column.
glm_mat_1 changes that by implementing the missing functions and types for glm::mat&lt;1,R,T,Q>, 
glm::mat&lt;C,1,T,Q> and glm::mat&lt;1,1,T,Q> for C, R in [2,3,4].

Requires glm version >= 0.9.9.1
