Class {
	#name : #Y3,
	#superclass : #X,
	#category : #Varianza
}

{ #category : #inline }
Y3 >> foo: obj [
	| c |
	"obj -> B"
	obj goo.
	obj too.
	Transcript show: 'Foo en clase convaraianza en lo q devuelve Y';cr.
	"retrun C->"
	c:= ClaseC new.
	c goo.
	c too.
	c zoo.
	^ c
]
