Class {
	#name : #Y1,
	#superclass : #X,
	#category : #Varianza
}

{ #category : #inline }
Y1 >> foo: obj [
	| c |
	"obj -> A"
	obj too.
	Transcript show: 'Foo contravarianza en lo que recibe en clase Y';cr.
	"retrun B->"
	c:= ClaseB new.
	c goo.
	c too.
	^ c
]
