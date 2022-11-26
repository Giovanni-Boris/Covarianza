Class {
	#name : #Y,
	#superclass : #X,
	#category : #Varianza
}

{ #category : #abstract }
Y >> foo: obj [
	| c |
	"obj -> B"
	obj goo.
	obj too.
	Transcript show: 'Foo en clase Y';cr.
	"retrun B->"
	c:= ClaseB new.
	c goo.
	c too.
	^ c
]
