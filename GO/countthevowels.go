package main
import (
	"fmt"
	"strings"
	"bufio"
	"os"
	"io"
)

func main() {
	var stdin *bufio.Reader
	var line []rune
	var c rune
	var err error

	stdin = bufio.NewReader(os.Stdin)

	for {
			c, _, err = stdin.ReadRune()
			if err == io.EOF || c == '\n' { break }
			if err != nil {
					fmt.Fprintf(os.Stderr,"Error reading standard input\n")
					os.Exit(1)
			}
			line = append(line,c)
	}
	
	word := strings.ToLower(string(line))
	
	var count int = 0
	for i := 0; i < len(word); i++ {
		if(word[i]=='a' || word[i]=='i' || word[i]=='u' || word[i]=='e' || word[i]=='o'){
			count+=1
		}
	}	
	fmt.Println(count)
    
}
