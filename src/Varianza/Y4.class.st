Class {
	#name : #Y4,
	#superclass : #X,
	#category : #Varianza
}

{ #category : #inline }
Y4 >> foo: obj [
	| c |
	"obj -> B"
	obj goo.
	obj too.
	Transcript show: 'Foo en clase convaraianza en lo q devuelve Y';cr.
	"retrun A->"
	c:= ClaseA new.
	c too.
	^ c
]
