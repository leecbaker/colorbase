colorbase
=========

Colorbase is a simple utility to colorize DNA sequences. Pipe data through it to colorize for visualization.

For example, run the following command:

    echo "ACTGGAcaaggt" | ./colorbase

or

    echo "ACTGGAcaaggt" | ./colorbase | less -R

Note: less requires the -R option to display colors; if you omit it, you will see the raw color commands rather than colorized text.
