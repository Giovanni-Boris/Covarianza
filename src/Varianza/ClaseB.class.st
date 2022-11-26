Class {
	#name : #ClaseB,
	#superclass : #Object,
	#category : #Varianza
}

{ #category : #abstract }
ClaseB >> goo [
	Transcript show: 'goo en clase A';cr
]

{ #category : #abstract }
ClaseB >> too [
	Transcript show: 'TOO en clase B';cr
]
