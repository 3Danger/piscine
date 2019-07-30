FT_LINE_1=a;
FT_LINE_2=r;
is_first=0;
echo "FT LINE 1 $FT_LINE_1";
echo "FT LINE 1 $FT_LINE_2";
cat /etc/passwd | sed '/^#/ d' | awk 'NR%2==0' | awk -F":" '{print $1}' | rev | sort -dr | while read p; do
    if [[ $p > $FT_LINE_1 ]] || [[ $p == $FT_LINE_1 ]]; then
        if [[ $p < $FT_LINE_2 ]] || [[ $p == $FT_LINE_2 ]]; then
            if [[ $is_first == 0 ]]; then
                printf "$p";
                is_first=1;
            else
                printf ", $p";
            fi;
        fi;
    fi;
done;
printf ".";

