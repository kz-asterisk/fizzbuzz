package main

import (
	"fmt"
	"testing"
)

func TestGetvalueFizz(t *testing.T) {
	fb := FizzBuzz{3, 100}
	actual := fb.GetValue()
	expected := "Fizz"
	if actual != expected {
		t.Errorf("got: %v\nwant: %v", actual, expected)
	}
}

func TestGetvalueBuzz(t *testing.T) {
	fb := FizzBuzz{5, 100}
	actual := fb.GetValue()
	expected := "Buzz"
	if actual != expected {
		t.Errorf("got: %v\nwant: %v", actual, expected)
	}
}

func TestGetvalueFizzBuzz(t *testing.T) {
	fb := FizzBuzz{15, 100}
	actual := fb.GetValue()
	expected := "FizzBuzz"
	if actual != expected {
		t.Errorf("got: %v\nwant: %v", actual, expected)
	}
}

func TestGetvalueCur(t *testing.T) {
	fb := FizzBuzz{31, 100}
	actual := fb.GetValue()
	expected := fmt.Sprint(fb.Cur)
	if actual != expected {
		t.Errorf("got: %v\nwant: %v", actual, expected)
	}
}
