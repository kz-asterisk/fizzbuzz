FROM golang:1.12 as build-env

WORKDIR /go/src/app
ADD . /go/src/app

RUN go get -d -v ./...
RUN go test -v ./...
RUN go build -o /go/bin/app

#FROM gcr.io/distroless/base
FROM gcr.io/distroless/base:debug
COPY --from=build-env /go/bin/app /
CMD ["/app"]
