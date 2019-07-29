<?php 
$dirname = __DIR__;
$output = exec("cd $dirname && cat z");
return $output === 'Z';