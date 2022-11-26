Class {
	#name : #Y2,
	#superclass : #X,
	#category : #Varianza
}

{ #category : #inline }
Y2 >> foo: obj [
	| c |
	"obj -> C"
	obj goo.
	obj too.
	obj zoo.
	Transcript show: 'Foo covarainza en lo que recibe en clase Y';cr.
	"retrun B->"
	c:= ClaseB new.
	c goo.
	c too.
	^ c
]
